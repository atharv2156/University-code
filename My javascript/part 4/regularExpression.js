let reg = /harry/;//this is regular expression literal in js

reg = /harry/g;//'g' is global 

reg = /harry/i;// 'i' mean case insensitive

// console.log(reg);
// console.log(reg.source);

let str = "this is grear code with harry and also with harry ";
//function to match expressions
//.exec() - This expression will return an array for match or null 

let result = reg.exec(str)
console.log(result);
// console.log(result.input);
// console.log(result.index);

//---we can use multiple exac with global flag----

// result = reg.exec(str)
// console.log(result);

// result = reg.exec(str)
// console.log(result);

//TEST FUNCTION----return true of false => test()
let result2 = reg.test()
// console.log(result2);//---> It will onluy print true if the reg is there is the string "a"




//MATCH FUNCTION-----it will return an array of results of null => match()
let result3 = str.match(reg)// ----> correct syntax
// console.log(result3);

//SEARCH FUNCTON ---- Returns index of first match else -1 =>search()
let result4 = str.search(reg); // ---> correct syntax
// console.log(result4);


//REPLACE FUNCTION ----- returns new replaced string with all the replacements (if no flag is given) =>replace()
let result5 = str.replace(reg, 'ATHARV');
console.log(result5);

