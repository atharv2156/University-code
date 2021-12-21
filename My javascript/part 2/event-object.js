document.getElementById("heading").addEventListener("click", function (e) {
 
    let variable;
  console.log("you have clicked the event");

  variable = e.target;
  variable = e.target.className;
  variable = Array.from(e.target.classList);

  variable = e.target.id;
  console.log(e.target);

  variable = e.offsetY;//in which cordinate you have click on event
  variable = e.offsetX;//in which cordinate you have click on event

  variable = e.clientX;
  variable = e.clientY;

  console.log(variable);
  // location.href = '//codewithharry/com'
});

//uncomment what you want
document.getElementById('button'),addEventListener('click',fun1);

function fun1(e){
    // console.log('thanks',e);
    e.preventDefault();
}


document.getElementById('button'),addEventListener('dblclick',fun2);

function fun2(e){
    // console.log('thanks its a double click',e);
    e.preventDefault();
}


document.getElementById('button'),addEventListener('mousedown',fun3);

function fun3(e){
    // console.log('thanks its a mouse down',e);
    e.preventDefault();
}



document.querySelector('.child1').addEventListener('mouseenter',function(){
    console.log('entered no');
});



document.querySelector('.child1').addEventListener('mouseleave',function(){
    console.log('you exited');
});



document.querySelector('.container').addEventListener('mousemove', function(e){
    console.log( e.offsetX , e.offsetY  )
    document.body.style.backgroundColor = `rgb(${e.offsetX},${e.offsetY},${e.offsetX},122)`
    console.log('you moved mouse');
})



//clickevents
//click
//dblclick
//mousedown
//mouseenter
//mouseleave
//mousemove