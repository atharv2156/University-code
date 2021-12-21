//Creating Removing & Replcing elementmentments

let element = document.createElement("div");
element.className = "child1"; //to give classes of elementments
element.id = "id1"; //id gives id's to elmemts
element.setAttribute("name", "title"); //it can set attribute

// element.innerText = 'thisa is new text';//insted of doin this we can do like this
// element.innerHTML = '<u>thisa is new text</u>';//insted of doin this we can do like this
let text = document.createTextNode("this is also new text");
element.appendChild(text); //it can insert text in element


// console.log(element);



let a = document.querySelector("ul.firstul");
a.appendChild(element);

// console.log(a);



let element2 = document.createElement("h3");
element2.id = "ele2";
element2.className = "ele2-class";
let elenode = document.createTextNode("this text created by text node");
element2.appendChild(elenode);
element.replaceWith(element2);

// console.log(element2);




pr = element2.getAttribute("class");
element2.removeAttribute("title");
element2.setAttribute("title", "myelementtitle");
// console.log(element2,pr);



let childs = document.getElementById("parent");
childs.replaceChild(element, document.getElementById("1divchild"));
childs.removeChild(element, document.getElementById("2divchild"));



//QUICK QUIZ
// create a heading element with text 'go to code with harry' and create an tag outside with href = "https://www.codewithharrry.com"

let create = document.createElement("h1");
create.setAttribute("herf", "ttps://www.codewithharrry.com");
let textnode = document.createTextNode("go to codewith harry");
create.appendChild(textnode);
console.log(create);
