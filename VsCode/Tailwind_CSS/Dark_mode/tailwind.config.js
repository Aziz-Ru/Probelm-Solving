/** @type {import('tailwindcss').Config} */
module.exports = {
  darkMode:"media", 
  content: ["*"],
  theme: {
    extend: {
     keyframes:{
      up:{
        '0%':{
          transform: 'translateX(-30%)',
          color:'red'
        },
        '100%':{
          color:'Green'
        }
        
      }

     },
     animation:{
      up: 'up 1s linear 10'
     },
     colors:{
      'regal-blue': '#243c5a',
     },
     fontFamily:{
      'my-font':[ 'Autour One', 'cursive'],
     },
     fontSize:{
      'my-fontsize':'24px'
     }

    },
  },
  plugins: [],
}

