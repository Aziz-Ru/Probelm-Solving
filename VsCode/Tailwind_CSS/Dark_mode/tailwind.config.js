/** @type {import('tailwindcss').Config} */
module.exports = {
  darkMode:"media", 
  content: ["*"],
  theme: {
    extend: {
      animation:{
        'slide-left': 'slide-left 2s' 
      },
     keyframes:{
      'slide-left':{
        '0%,100%':{transform: 'translateX(-300%)'}
      }
     }
    },
  },
  plugins: [],
}

