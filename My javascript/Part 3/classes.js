class emloyee {
  constructor(givenName, givenExp, givenDivision) {
    this.name = givenName;
    this.exp = givenExp;
    this.division = givenDivision;
  }
  slogan() {
    return `i am ${this.name} and i am owner of company`;
  }
  foundedfrom() {
    return 2020 - this.exp;
  }
  static yearNow(a, b) {
    return a + b;
  }
}


atharv = new emloyee("atharv", 32, "B-19");
console.log(atharv);

//Inheritance of class
class programmer extends emloyee {
  constructor(givenName, exprience, divison, langauge, gitHub) {
    super(givenName, exprience, divison);
    this.langauge = langauge;
    this.gitHub = gitHub;
  }
  favLang() {
    if (this.Langauge == "python") {
      return python;
    } else {
      return "java";
    }
  }
  static multiply(a, b) {
    return a * b;
  }
}

atharav = new programmer("athav", "3yrs", "B", "java", "github");
console.log(atharav);
console.log(atharav.favLang());
console.log(programmer.multiply(3, 4));

