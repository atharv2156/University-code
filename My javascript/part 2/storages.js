//LOCAL STORAGE


//add key value inside localstorage
localStorage.setItem('name','harry');
localStorage.setItem('name2','john');

//cant add array insted we can do this

let localarray = ['aloo','tomato','carrot','masala'];
//to store this type 
localStorage.setItem('vegitables',JSON.stringify(localarray));


//data becomes js object b;y 
let vegi;
vegi = JSON.parse(localStorage.getItem('vegitables'));
console.log(vegi)

//to clear storage
// localStorage.clear();

//to remove item
// localStorage.removeItem('name');

//to retrive item from local storage
let name = localStorage.getItem('name');
console.log(name);


let name2 = localStorage.getItem('name2');
console.log(name2);




//SESSION STORAGE
//session storage is cleared after browser is closed
//but local storage saved permently
sessionStorage.setItem('sessionname','Sharry');
sessionStorage.setItem('sessionname2','Sjohn');
sessionStorage.setItem('sessionvegitables',JSON.stringify(localarray));