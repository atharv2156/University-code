//type conversion type coercion
let var1;
// var1 = 33;//this is int
var1 = String(22);//now this is string
console.log(var1 ,(typeof var1));



//let booleanvar  = true;
let booleanvar = String(true);
console.log(booleanvar ,(typeof booleanvar));



let date = new Date();
// let date = String(new Date());
console.log(date,(typeof date));


let arr = [1,2,3,5,6,7];
// let arr = String([1,2,3,5,6,7]);
console.log(arr.length, (typeof arr));



let i = 9;
console.log(i.toString());



let stri1 = Number('1234');
// let stri1 = Number('123ds4');
stri1 = Number(true);
// stri1 = Number(false);
console.log(stri1, (typeof stri1));



let num1 = parseFloat('67.98800');
console.log(num1.toFixed(2),(typeof num1));




//TYPE COERCION
let mystr = '38';
let mynum = 30;
//it converts num into string and add to string like
console.log(mystr + mynum);

