const fs = require("fs");

let n = Number(fs.readFileSync(0, "utf8").trim());


const results = []
results.push(n)
console.log(results)