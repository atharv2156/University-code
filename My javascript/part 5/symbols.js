
const symbol = Symbol('my identifier');
const symbol2 = Symbol('my identifier');

console.log('my symbol is',symbol);
console.log('type of my symbol is', typeof symbol);

console.log(symbol === symbol2);
//////////////////////////////////////////////////
const k1 = Symbol('identifier1');
const k2 = Symbol('identifier2');

let myObj = {};

myObj[k1] = "atharv";
myObj[k2] = "arpita";
myObj['name'] = "shreyash";
myObj[4] = "rushi";


console.log(myObj);
console.log(myObj[k1]);
console.log(myObj[k2]);
// console.log(myObj.k2);//cannot do this to get values beacause it is same as myObj['k2]


//symbols are ignored in for loop 
for(key in myObj){
    console.log(key, myObj[key]);
}

