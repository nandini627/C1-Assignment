let tem=prompt("enter the temperature:");
if(tem<0){
    console.log('Freezing cold');
}
else if(0<=tem<=15){
    console.log("very cold");
}
else if(16<=tem<=25){
    console.log("cold");
}
else if(26<=tem<=35){
    console.log("warm");
}
else if(tem<=35){
    console.log("hot");
}