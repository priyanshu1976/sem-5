// ? Example: Understanding the difference between var, let, and const in JavaScript

// * 1. Scope:
// *    - var: function-scoped (or globally scoped if declared outside a function)
// *    - let, const: block-scoped (only accessible within the nearest enclosing { ... })

// * 2. Hoisting:
// *    - var: declarations are hoisted (moved to the top), but not initializations
// *    - let, const: declarations are hoisted but not initialized
// !      (accessing before declaration causes ReferenceError)

// * 3. Reassignment:
// *    - var, let: can be reassigned
// *    - const: cannot be reassigned
// !      (but if it's an object/array, its contents can be changed)

// * 4. Redeclaration:
// *    - var: can be redeclared in the same scope
// *    - let, const: cannot be redeclared in the same scope

// ? See the examples below:

// ? Example 1: Scope
var x = 10
function scopeExample() {
  if (true) {
    var x = 1 // * function-scoped
    // ! var is defined 2 times but local has more precidence over global
    let y = 2 // * block-scoped
    const z = 3 // * block-scoped
    console.log('Inside block:', x, y, z) // * 1 2 3
  }
  console.log('Outside block:', x) // * 1 (var is accessible)
  // ! console.log(y); //  ReferenceError: y is not defined
  // ! console.log(z); // ReferenceError: z is not defined
}
scopeExample()

// ? Example 2: Hoisting
function hoistingExample() {
  console.log(a) // * undefined (var is hoisted)
  // ! console.log(b); // ReferenceError: Cannot access 'b' before initialization
  // ! console.log(c); // ReferenceError: Cannot access 'c' before initialization

  var a = 10
  let b = 20
  const c = 30
}
hoistingExample()

// ? Example 3: Reassignment and Redeclaration
var foo = 100
foo = 200 // * OK
var foo = 300 // * OK (redeclaration allowed with var)
console.log('var foo:', foo)

let bar = 400
bar = 500 // * OK
// ! let bar = 600; // Error: Identifier 'bar' has already been declared
console.log('let bar:', bar)

const baz = 700
// ! baz = 800; // Error: Assignment to constant variable
// ! const baz = 900; // Error: Identifier 'baz' has already been declared
console.log('const baz:', baz)

// ? Example 4: const with objects and arrays
const arr = [1, 2, 3]
arr.push(4) // * Allowed: modifying contents
console.log('const array:', arr)

const obj = { name: 'Alice' }
obj.name = 'Bob' // * Allowed: modifying properties
console.log('const object:', obj)

// ? no keyword
surya = 'gay' // ? this is a global variable
surya = String('bhosda')

console.log(surya, typeof surya)

// ===============================
// ? String Methods Examples in JavaScript
// ===============================

const str = '  Hello, World!  '

// * 1. String length
console.log('1. Length:', str.length) // * 17 (includes spaces)

// ? 2. String charAt()
console.log('2. charAt(2):', str.charAt(2)) // * 'H' (indexing starts at 0)

// ? 3. String charCodeAt()
console.log('3. charCodeAt(2):', str.charCodeAt(2)) // * 72 (Unicode of 'H')

// ? 4. String at()
// * at() supports negative indices
console.log('4. at(2):', str.at(2)) // * 'H'
console.log('4. at(-2):', str.at(-2)) // * '!' (second last character)

// ? 5. String [ ] (bracket notation)
console.log('5. str[2]:', str[2]) // * 'H'

// ? 6. String slice()
// * slice(start, end) - end not included
console.log('6. slice(2, 7):', str.slice(2, 7)) // * 'Hello'
console.log('6. slice(-7, -1):', str.slice(-7, -1)) // * 'World!'

// ? 7. String substring()
// * substring(start, end) - end not included, negative values treated as 0
console.log('7. substring(2, 7):', str.substring(2, 7)) // * 'Hello'
console.log('7. substring(7, 2):', str.substring(7, 2)) // * 'Hello' (! swaps if start > end)

// ? 8. String substr()
// ! substr(start, length) - deprecated but still works
console.log('8. substr(2, 5):', str.substr(2, 5)) // * 'Hello'

// ? 9. String toUpperCase()
console.log('9. toUpperCase():', str.toUpperCase()) // * '  HELLO, WORLD!  '

// ? 10. String toLowerCase()
console.log('10. toLowerCase():', str.toLowerCase()) // * '  hello, world!  '

// ? 11. String concat()
console.log('11. concat():', 'Hello'.concat(', ', 'JS!')) // * 'Hello, JS!'

// ? 12. String trim()
// * Removes whitespace from both ends
console.log('12. trim():', `"${str.trim()}"`) // * '"Hello, World!"'

// ? 13. String trimStart()
// * Removes whitespace from the start
console.log('13. trimStart():', `"${str.trimStart()}"`) // * '"Hello, World!  "'

// ? 14. String trimEnd()
// * Removes whitespace from the end
console.log('14. trimEnd():', `"${str.trimEnd()}"`) // * '"  Hello, World!"'

// ? 15. String padStart()
// * Pads the string at the start to reach a given length
console.log('15. padStart():', '"42".padStart(5, "0") =', '42'.padStart(5, '0')) // * '00042'

// ? 16. String padEnd()
// * Pads the string at the end to reach a given length
console.log('16. padEnd():', '"42".padEnd(5, ".") =', '42'.padEnd(5, '.')) // * '42...'

// ? 17. String repeat()
// * Repeats the string n times
console.log('17. repeat():', 'ha'.repeat(3)) // * 'hahaha'

// ? 18. String replace()
// * Replaces first occurrence of a substring or pattern
console.log('18. replace():', 'foo bar foo'.replace('foo', 'baz')) // * 'baz bar foo'

// ? 19. String replaceAll()
// * Replaces all occurrences of a substring or pattern
console.log('19. replaceAll():', 'foo bar foo'.replaceAll('foo', 'baz')) // * 'baz bar baz'

// ? 20. String split()
// * Splits the string into an array by separator
console.log('20. split():', 'a,b,c'.split(',')) // * ['a', 'b', 'c']

// ===============================

let g = '10'
let h = 20

console.log(g + h)

var pp = 'a,b,c'.split(',')

var pp = ['a', 'b', 'c']

console.log(pp, typeof pp) // typeof returns "object" for arrays because in JavaScript, arrays are a special kind of object.
// To check if pp is actually an array, use Array.isArray:
console.log('Is pp an array?', Array.isArray(pp)) // true
