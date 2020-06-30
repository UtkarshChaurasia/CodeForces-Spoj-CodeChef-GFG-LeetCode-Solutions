function vowelsAndConsonants(s) {
    var n = s.length;
    var i;
    for(i = 0;i<n;i++)
    {
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
        {
            console.log(s[i]);
        }
    }
    for(i = 0;i<n;i++)
    {
        if(s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='u')
        {
            console.log(s[i]);
        }
    }
    
}


function main() {
    const s = readLine();
    
    vowelsAndConsonants(s);
}
