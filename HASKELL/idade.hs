main :: IO ()
main = do
    putStrLn "Qual sua idade? "
    num1 <- readLn :: IO Float

    putStrLn $ if num1 < 18 then "Você é menor de idade." else "Você é maior de idade."