async function myName() {
  console.log("inside function");

  const response = await fetch("https://api.github.com/users");

  console.log("before response ");

  const users = await response.json();

  console.log("users resolved");

  return users;
}

console.log("before calling name");

let names = myName();

console.log("after calling name");

console.log(names);

names.then((data) => console.log(data));

console.log("Last line of js file");
