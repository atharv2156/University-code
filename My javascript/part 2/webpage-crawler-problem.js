//exercise 1
//you have to create a variable which is string containing text is you are intrested in .
//you have to fetch all links from given page which contains text.

let a = document.links;
 
Array.from(a).forEach(function(element){
    if(element.href.includes('javascript')){
        console.log(element.href);
    }
});