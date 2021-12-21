let people = ['atharv','arpita','shreyash','rushi'];

//traditional for loop

// for(let i = 0 ; i < people.length ; i++){
//     const element = people[i];
//     console.log(element);
// }

obj = {
    name: "atharv",
    language:"JavaScript",
    hobbies:"learning Javascript"
}
// console.log(obj);

//iterator an object using for in loop (traditional)
for(let i = 0 ; i < Object.keys(obj).length ; i++){
    const element = obj[Object.keys(obj)[i]];
    console.log(element);
}

//Itrating an object using for loop(new)
for(let key in people){
    console.log(people[key])
}

//we can use for string in with strings to loop through all the characters(new)
let myString = 'this is my string';
for(let key in myString){
    console.log(myString[key])
}

// Quiz : use traditional for loop to itreate through same string
// for(let i = 0 ; i < myString.length ; i++){
//     const element = myString[i];
//     console.log(element);
// }


//------------------For of loops---------------------
console.log('***********looop starts here***********');

let newPeople = ['atharv','arpita','shreyash','rushi','pratik','vedant'];
for(let name of newPeople){
    console.log(name);
}