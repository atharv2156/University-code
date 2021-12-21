//CREATING EDITABLE DIV USING JAVASCRIPT
//eXERCISE : 2
//you hava to inhext it into the page which contains a heding .
//whenever someone click on the it should converted into a  editabel item whenever user click away (blur) save the note into local storage

// let createele = document.createElement('div');
// createele.className = "edit"
// console.log(createele);
let element = 'hello' 

let ele1 = document.getElementById('parent').addEventListener('click',function(){
    
        let text = document.createTextNode("this is also new text");
        inserttext = document.querySelector('.child1');
        inserttext.replaceWith(text);
    
        let text1 = document.createTextNode(" this is second text");
        inserttext = document.querySelector('.child2');
        inserttext.replaceWith(text1);
    
        let text2 = document.createTextNode(" this is third text");
        inserttext = document.querySelector('.child3');
        inserttext.replaceWith(text2);
    
        let text3 = document.createTextNode(" this is fourth text");
        inserttext = document.querySelector('.child4');
        inserttext.replaceWith(text3);
    
});

////////////////////////////////////////////////////////////////////////////////////////////////////////////

let div = document.createElement('div');
let string;

if(localStorage.length === 0){
    string = document.createTextNode('click to edit');

}
else{
    string = document.createTextNode(localStorage.getItem('note'));
}

div.appendChild(string);
div.setAttribute('id','div1');
console.log(div)

div.setAttribute('contenteditable','true');
document.body.insertBefore(div,document.getElementById('div1'));

let mydiv = document.getElementById('div1');

mydiv.addEventListener('blur' , function(){
    mydiv2 = mydiv.innerTEXT;
    console.log('the note has been saved in local storage');


    localStorage.setItem('note',mydiv2);

});

let box = document.style.drawBox(blue);

