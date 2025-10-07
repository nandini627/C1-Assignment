// Que 3:income text calculator
let income = prompt("Enter your income:");
if(income<=250000)
console.log("No text");
else if(250001<=income<=500000){
    console.log("5% text");
}
else if(500000<=income<=1000000){
    console.log(" 20% text");
}
else if(income>=1000000){
    console.log("30% text");
}
