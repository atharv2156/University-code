// Maps in javascript : we can use any type of key or value
const myMap = new Map();
const key1 = "firstString" , key2={} , key3 = function(){};

//settin map values
myMap.set(key1,'this is string');
myMap.set(key2,'this is object');
myMap.set(key3,'this is function');

console.log(myMap);

//getting the values from a map
let value1 = myMap.get(key1);
console.log(value1);

let value2 = myMap.get(key2);
console.log(value2);

let value3 = myMap.get(key3);
console.log(value3);

//get the size of the map
console.log(myMap.size);


// you can loop using for..of to get keys and values
for(let[key,value] of myMap){
    console.log('key is ',key);
}

for(let value of myMap.keys()){
    console.log('value is ',value);
}


//you can use for each loop 
myMap.forEach((value,key) => {
    console.log('key is',key);
    console.log('value is',value);
    
})

//converting ot an array
let myArray = Array.from(myMap);
console.log('map to an array is ',myArray);

//converting map keys to an array
let myArraykeys = Array.from(myMap.keys());
console.log('map to an array is ',myArraykeys);

//convering map values to an array
let myArrayvalues = Array.from(myMap.values());
console.log('map to an array is ',myArrayvalues);