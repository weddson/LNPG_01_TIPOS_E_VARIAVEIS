

main :: IO ()
main = do
    putStrLn "Primeira nota:"
    grade1 <- readLn
    putStrLn "Qual o peso da primeira nota?"
    weight1 <- readLn

    putStrLn "Segunda nota:"
    grade2 <- readLn
    putStrLn "Qual o peso da segunda nota?"
    weight2 <- readLn

    putStrLn "Terceira nota:"
    grade3 <- readLn
    putStrLn "Qual o peso da terceira nota?"
    weight3 <- readLn

    let media = (grade1 * weight1 + grade2 * weight2 + grade3 * weight3) / (weight1 + weight2 + weight3)
    putStrLn ("A média ponderada é: " ++ show media)
