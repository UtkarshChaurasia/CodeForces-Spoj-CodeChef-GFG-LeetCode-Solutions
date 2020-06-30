function factorial(n)
{
    if(n==1)
    {
        return n;
    }
    else
    {
        return n*factorial(n-1);
    }
}


function main() {
    const n = +(readLine());
    
    console.log(factorial(n));
}
