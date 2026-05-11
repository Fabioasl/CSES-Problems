// impar multiplica por 3 e soma 1
// par divide por 
const fs = require("fs");

let n = Number(fs.readFileSync(0, "utf8").trim());
const results = []
results.push(n);

while (n != 1){
    if (n % 2 == 0){
        n = n / 2
        results.push(n);
    }
    else if (n % 2 == 1){
        n = n * 3 + 1;
        results.push(n);
    }
}

console.log(results.join(" "));
