main :: IO ()
main = do
    putStrLn "Qual número? "
    num1 <- readLn :: IO Int

    putStrLn $ if even num1 then "O número é par." else "O número é impar."