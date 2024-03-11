import System.IO
add3 :: Int -> Int 
add3 = (+3)

mul2 :: Int -> Int
mul2 = (*2)

mycompute :: Int -> IO Int
mycompute v0 = do
    putStrLn ("add3 " ++ show v0)
    let v1 = add3 v0
    putStrLn ("mul2 " ++ show v1)
    let v2 = mul2 v1
    return v2

mycomputegrr :: Int -> IO Int
mycomputegrr v0 = do
    yooo <- openFile "yoo.txt" WriteMode
    putStrLn ("add3 " ++ show v0)
    hPutStrLn yooo ("add3 " ++ show v0)
    let v1 = add3 v0
    putStrLn ("mul2 " ++ show v1)
    hPutStrLn yooo ("mul2 " ++ show v1)
    let v2 = mul2 v1
    hClose yooo
    return v2

mycomputehihi :: (String -> IO()) -> Int -> IO Int
mycomputehihi logF v0 = do
    logF ("add3 " ++ show v0)
    let v1 = add3 v0
    logF ("mul2 " ++ show v1)
    let v2 = mul2 v1
    return v2


main :: IO ()
main = do
    putStrLn "this is log-hs"
    
    res <- mycompute 18
    print res
    res2 <- mycomputehihi putStrLn 18
    hf <- openFile "log.txt" WriteMode
    res3 <- mycomputehihi (\str -> hPutStrLn hf str) 18
    hClose hf
    print res2
