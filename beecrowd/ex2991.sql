WITH vencimentos AS (
    SELECT 
        ev.matr,
        COALESCE(SUM(v.valor), 0) AS total_venc
    FROM emp_venc ev
    LEFT JOIN vencimento v ON v.cod_venc = ev.cod_venc
    GROUP BY ev.matr
),
descontos AS (
    SELECT 
        ed.matr,
        COALESCE(SUM(d.valor), 0) AS total_desc
    FROM emp_desc ed
    LEFT JOIN desconto d ON d.cod_desc = ed.cod_desc
    GROUP BY ed.matr
),
salario_empregado AS (
    SELECT
        e.matr,
        e.lotacao AS cod_dep,
        GREATEST(
            COALESCE(v.total_venc, 0) - COALESCE(d.total_desc, 0),
            0
        ) AS salario
    FROM empregado e
    LEFT JOIN vencimentos v ON v.matr = e.matr
    LEFT JOIN descontos d ON d.matr = e.matr
)

SELECT
    dep.nome AS "Nome Departamento",
    COUNT(DISTINCT se.matr) AS "Numero de Empregados",
    ROUND(AVG(se.salario), 2) AS "Media Salarial",
    ROUND(MAX(se.salario), 2) AS "Maior Salario",
    ROUND(MIN(se.salario), 2) AS "Menor Salario"
FROM departamento dep
LEFT JOIN salario_empregado se ON se.cod_dep = dep.cod_dep
GROUP BY dep.nome
ORDER BY "Media Salarial" DESC;
