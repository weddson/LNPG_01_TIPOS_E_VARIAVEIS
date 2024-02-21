main :: IO ()
main = do
    putStrLn "Digite o primeiro número: "
    num1 <- readLn :: IO Float
    putStrLn "Digite o segundo número: "
    num2 <- readLn :: IO Float

    putStrLn("Resultado da adição: " ++ show (num1 + num2))
    putStrLn("Resultado da subtração: " ++ show (num1 - num2))
    putStrLn("Resultado da multiplicação: " ++ show (num1 * num2))
    putStrLn("Resultado da divisão: " ++ show (num1 / num2))