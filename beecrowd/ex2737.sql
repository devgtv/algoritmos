SELECT
    nome,
    numeroClientes
FROM (
    SELECT
        name AS nome,
        customers_number AS numeroClientes
    FROM lawyers
    WHERE customers_number = (SELECT MAX(customers_number) FROM lawyers)

    UNION ALL

    SELECT
        name AS nome,
        customers_number AS numeroClientes
    FROM lawyers
    WHERE customers_number = (SELECT MIN(customers_number) FROM lawyers)

    UNION ALL

    SELECT
        'Average' AS nome,
        CAST(AVG(customers_number) AS INTEGER) AS numeroClientes
    FROM lawyers
) resultado;
