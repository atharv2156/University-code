/* you have to creat a element div and inject into the page contains a heading .
whenever someone clicks on the div,it should be converted into an editable item. whenever user click away blur . save the into local storage*/
//create element
let divEle = document.createElement("div");

//give text
//local storage
let storetext = localStorage.setItem("text");
let text;
if (storetext == null) {
  let text = document.createTextNode("this is my element , click to edit");
} else {
  text = document.createElement(storetext);
}
divEle.appendChild(text);

//give class or id
divEle.setAttribute("class", "editele");
divEle.setAttribute("id", "elem");
divEle.setAttribute(
  "style",
  "border: 2px solid  black; width: 100px; padding: 23px; margin: 35px;"
);

let container = document.querySelector(".container");

//Insert the element Before element with id first
container.insertBefore(divEle);

divEle.addEventListener("click", function () {
  let noTextArea = document.getElementsByClassName("textarea").length;
  if (noTextArea == 0) {
    let html = divEle.innerHTML;
    divEle.innerHTML = `<textarea class="Textarea" id="Textarea" rows="3">${html}</textarea>`;
  }
  //listen for the blur event on textarea
  let textarea = document.getElementById("textarea");
  textarea.addEventListener("blur", function () {
    elem.innerHTML = textarea.value;
    localStorage.setItem("text", elem.innerHTML);
  });
});
