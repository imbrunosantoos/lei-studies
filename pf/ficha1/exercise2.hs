{-
2. Defina as seguintes fun¸c˜oes sobre polin´omios de 2º grau
    
(a) A fun¸c˜ao nRaizes que recebe os (3) coeficientes de um polin´omio de 2º grau e que
calcula o n´umero de ra´ızes (reais) desse polin´omio
-}
nRaizes :: Double -> Double -> Double -> Int
nRaizes a b c 
       | b^2 - 4 * a * c > 0 = 2
       | b^2 - 4 * a * c == 0 = 1
       | otherwise = 0

raizes :: Double -> Double -> Double -> [Double]
raizes a b c 
      | nRaizes a b c == 1
      = [- b / (2 * a)]
      | nRaizes a b c == 2
      = [(-b + sqrt (b^2 - 4 * a * c)) / (2 * a), (-b - sqrt (b^2 - 4 * a * c)) / (2 * a)]
      | otherwise = []

