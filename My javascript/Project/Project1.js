//if user add a note add it to the local storage
let addbtn = document.getElementById('addbtn');
addbtn.addEventListener("click",function(e){

    let addTxt =  document.getElementById('addTxt');
    let notes = localStorage.getItem('notes');
    if(notes == null){
        notesObj = [];
    }
    else{
        notesObj = JSON.parse(notes);
    }
    notesObj.push(addTxt.value);
    localStorage.setItem('notes',JSON.stringify(notesObj));
    addTxt.value = "";
    // console.log(notesObj);
    showNotes();
  
});

function showNotes(){

    let notes =  localStorage.getItem('notes');
    if(notes == null){
        notesObj = [];
    }
    else{

        notesObj = JSON.parse(notes);

    }
    let html = "";
    notesObj.forEach(function(element,index){
        html += 
            `  <div class="note card my-2 mx-2 card" style="width: 18rem;">
            <div class="card-body">
              <h5 class="card-title">Note title${index + 1}</h5>
              <p class="card-text">${element}</p>
              <a href="#" id = "${index}" onclick = "delNote(this.id)" class="btn btn-primary">Delete Notes</a>
            </div>
          </div>
          `
    });


    let Elenotes = document.getElementById('notes');
    if(notes.length != 0){
        Elenotes.innerHTML = html;
    }
    else{
        Elenotes.innerHTML = 'Noting to show! section obove to add notes'
    }
}

function delNote(index){
    
    let addTxt =  document.getElementById('addTxt');
    let notes = localStorage.getItem('notes');
    if(notes == null){
        notesObj = [];
    }
    else{
        notesObj = JSON.parse(notes);
    }
    
    notesObj.splice(index,1);
    localStorage.setItem('notes',JSON.stringify(notesObj));
    showNotes();
    // noteTitle();
}



// function noteTitle(){

//      let notes = localStorage.getItem('notes');
//     if(notes == null){
//         notesObj = [];
//     }
//     else{
//         notesObj = JSON.parse(notes);
//     }

//     let convertText = document.getElementById('convertTxt');
//     convertText.innerHTML = document.querySelector('.giventext')
    

//     let noteT = document.querySelector('#titleofnote');
//     noteT.innerHTML = convertText;
//     console.log(noteT.innerHTML);
  

// }
