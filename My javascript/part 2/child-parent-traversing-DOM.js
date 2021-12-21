
let cont = document.querySelector('.container');

// console.log(cont.childNodes);//it gives all element
// console.log(cont.children);//it gives only tags or imp element

let nodeName = cont.childNodes[1].nodeName;
console.log(nodeName);//it gives spicific element name and tagname

let nodetype = cont.childNodes[1].nodeType;
console.log(nodetype);

//NODE TYPES
// 1 = element
//2 = Attribute
//3 = textnode
//8  = comment
//9 = document
//10 = doctype

let container = document.querySelector('div.container');
console.log(container.children[1].children);//to get children element of childern

// console.log(container.firstElementChild);//to get first child elemente

// console.log(container.lastElementChild);//to get last element child

// console.log(container.childElementCount);//to count child elements

// console.log(container.firstElementChild.parentNode.nextElementSibling);//you can use chaining like this