function apiDefination() {
  [
    {
      word: "deterrent example",
      results: [
        {
          definition: "punishment intended as a warning to others",
          partOfSpeech: "noun",
          synonyms: ["example", "lesson", "object lesson"],
          types: ["admonitioapidefinationn", "monition", "warning", "word of advice"],
        },
      ],
    },
  ];
}

function defination(apis, callback) {
  setTimeout(function() {
    apiDefination.push(apis);
    console.log("defination has been called");
    callback();
  }, 1000);
}
function calldef() {
  setTimeout(function () {
    let type = "";
    apiDefination.forEach(function(apis){
      type += `<ol> ${apis.results.synonyms} ${apis.results.types}<ol>`;
    });
    document.getElementById("def").innerHTML = type;
    console.log('your defination');
  }, 2000);
}

let newDefination = {
  synonyms: 'Doom', types: 'dayam',
}

defination(newDefination);
calldef()