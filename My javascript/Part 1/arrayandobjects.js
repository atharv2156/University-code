//Array and Objects
let marks = [32,34,45,34,23,43];
console.log(marks);

const fruits = ['orange','starwberry','mango','kivi'];
console.log(fruits);

const mixed = [34 ,'hello',83,[23,54]];
console.log(mixed);

const arr = new Array(23,45,65,'pink');
console.log(mixed.isArray);



arr[0] = 'harry';
console.log(arr);


let  value = marks.indexOf(33);
console.log(value)

// mutating and modifying arrays
marks.push(223);//add array from last


marks.unshift(332);//add array from start


marks.pop();//remove array from last


marks.shift();//ramove arrray from start


marks.splice(1,5);//remove array by give index


marks.reverse();//make array reverse

let marks2 = [1,2,3,4,5];
marks = marks.concat(marks2);
console.log(marks);


//0BJECT
let myobj = {
    name:'atharv',
    middlename:'vinod',
    surname:'thombare'
}

console.log(myobj);
console.log(myobj.name);