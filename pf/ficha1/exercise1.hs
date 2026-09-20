{-
• length l: o n´umero de elementos da lista l
• head l: a cabe¸ca da lista (n˜ao vazia) l
• tail l: a cauda da lista (n˜ao vazia) l
• last l: o ´ultimo elemento da lista (n˜ao vazia) l
• sqrt x: a raiz quadrada de x
• div x y: a divis˜ao inteira de x por y
• mod x y: o resto da divis˜ao inteira de x por y
-}

{-
(a) perimCirc – que calcula o per´ımetro de uma circunferˆencia, dado o comprimento
do seu raio.
-}
perimCirc :: Double -> Double
perimCirc r = 2*pi*r

{-
(b) dist – que calcula a distˆancia entre dois pontos no plano Cartesiano. Cada ponto
´e um par de valores do tipo Double.
-}
dist :: (Double, Double) -> ( Double, Double) -> Double
dist (x1, x2) (y1,y2) = sqrt((x1-x2)^2+(y1-y2)^2) 

{-
(c) primUlt – que recebe uma lista e devolve um par com o primeiro e o ´ultimo
elemento dessa lista.
-}

primUlt :: [a] -> (a,a)
primUlt l = (head l, last l)

{-
(d) multiplo – tal que multiplo m n testa se o n´umero inteiro m ´e m´ultiplo de n
-}
multiplo :: Int -> Int -> Bool
multiplo m n = mod m n == 0

{-
(e) truncaImpar – que recebe uma lista e, se o comprimento da lista for ´ımpar retira-
lhe o primeiro elemento, caso contr´ario devolve a pr´opria lista.
-}
truncaImpar :: [a] -> [a]
truncaImpar l 
            | mod(length l) 2 == 0 = l
            | otherwise = tail l

{-
(f) max2 – que calcula o maior de dois n´umeros inteiros.
-}            
max2 :: Int -> Int -> Int
max2 x y 
    | x>=y = x
    | otherwise = y

{-
(g) max3 – que calcula o maior de trˆes n´umeros inteiros, usando a fun¸c˜ao max2
-}   
max3 :: Int -> Int -> Int -> Int
max3 x y z 
    | max2 x y == x && max2 x z == x = x
    | max2 y z == y = y
    | otherwise = z
