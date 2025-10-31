console.log((999 + 99).toString())

let now = new Date()
console.log(now) // Current date & time

let d = new Date()

console.log(d.getFullYear()) // 2025
console.log(d.getMonth()) // 0–11 → (8 means September)
console.log(d.getDate()) // 1–31
console.log(d.getDay()) // 0–6 (0=Sunday, 6=Saturday)

console.log(d.getHours()) // 0–23
console.log(d.getMinutes()) // 0–59
console.log(d.getSeconds()) // 0–59
console.log(d.getMilliseconds()) // 0–999

console.log(d.getTime()) // milliseconds since Jan 1, 1970

let d2 = new Date(2025, 8, 22, 10, 30, 45) // Sep 22 2025, 10:30:45
console.log(d2)

var i = 0

do {
  console.log('this will execute once')
} while (i > 0)

const complexObject = {
  id: 101,
  name: 'Alice',
  isActive: true,
  scores: [98, 87, 92, 100],
  address: {
    street: '123 Main St',
    city: 'Metropolis',
    zip: '12345',
    geo: {
      lat: 40.7128,
      lng: -74.006,
    },
  },
  contacts: [
    { type: 'email', value: 'alice@example.com' },
    { type: 'phone', value: '+1-555-1234' },
  ],
  preferences: {
    theme: 'dark',
    notifications: {
      email: true,
      sms: false,
      push: {
        enabled: true,
        sound: 'chime',
      },
    },
  },
  projects: [
    {
      name: 'Project X',
      status: 'active',
      tasks: [
        { title: 'Design', completed: true },
        { title: 'Development', completed: false },
      ],
    },
    {
      name: 'Project Y',
      status: 'archived',
      tasks: [],
    },
  ],
  getSummary: function () {
    return `${this.name} (${this.id}) - ${this.address.city}`
  },
}

// for (key in complexObject) {
//   console.log(key, ':', complexObject[key])
// }

// const arr = 'suryakimaakichut'.split('')

// console.log(arr)

// for (pp in arr) {
//   console.log(arr[pp])
// }

// for (pp of arr) {
//   console.log(pp)
// }

var a = 10 // global
;(function () {
  var b = 20 // local to IIFE
  console.log('Inside IIFE:', b)
})()
console.log(a) // 10
// console.log(b); // ❌ Error, b is not defined
