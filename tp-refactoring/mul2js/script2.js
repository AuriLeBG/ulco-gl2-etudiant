
function mul2(n) {
    return n*(!+[]+!+[]);
}

function make_handlers(span, input)
{
    return function() {
        span.innerHTML = mul2(input.value)
    }   
}