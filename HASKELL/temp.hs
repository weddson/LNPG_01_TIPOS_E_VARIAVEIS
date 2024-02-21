celcf :: Double -> Double
celcf temp = (temp * 1.8) + 32

main :: IO ()
main = do
    putStrLn "Qual a temperatura em Celcius? "
    num1 <- readLn :: IO Double
    let temp = num1
    let tempfin = celcf temp
    putStrLn ("A temperatura em Fahrenheit é: " ++ show tempfin)