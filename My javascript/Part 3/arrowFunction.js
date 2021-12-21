function harry(){
    console.log('regular function');
}
//-----------------------------------
let code = function(){
    console.log('normal function 2');
}
harry();
code();
//-----------------------------------

const greet = function(){
    return 'good morning';
}
console.log(greet());
//-----------------------------------

const arrow = () => 'arrow function';
console.log(arrow());

//-----------------------------------

const obj = () => ({name: 'atharv' , class:'college'});
console.log(obj());

//-----------------------------------
//single parameters no need paranthesis 
//but we have to put parenthesis if there are multiple parameters
const string = (name , end) => 'hello '+ name + end;
console.log(string('atharv' , ' bye'));