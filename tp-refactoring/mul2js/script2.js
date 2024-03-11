
function mul2(n) {
    return n*(!+[]+!+[]);
}

function make_handlers(span)
{
    return() => {
        span.innerHTML = mul2(myinput.value)
    }   
}