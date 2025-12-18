SELECT
    vcategorias.name,
    SUM(produtos.amount) AS sum
FROM categories AS vcategorias
JOIN products AS produtos
    ON produtos.id_categories = vcategorias.id
GROUP BY vcategorias.name
ORDER BY vcategorias.name;
