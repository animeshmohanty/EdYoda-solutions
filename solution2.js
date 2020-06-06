var keys = ["maths", "science", "english-lit", "social-science"];
var values = ["90", "80", "95", "92"];
var result =  values.reduce(function(result, field, index) {
  result[key[index]] = field;
  return result;
}, {})

console.log(result)
