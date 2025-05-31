// Function to generate a random hex color
function getRandomColor() {
    const hex = "0123456789ABCDEF";
    let color = "#";
    for (let i = 0; i < 6; i++) {
      color += hex[Math.floor(Math.random() * 16)];
    }
    return color;
  }
  
  // Get DOM elements
  const btn = document.getElementById("changeColorBtn");
  const colorCodeText = document.getElementById("colorCode");
  
  // Add event listener
  btn.addEventListener("click", function () {
    const newColor = getRandomColor();
    document.body.style.backgroundColor = newColor;
    colorCodeText.textContent = newColor;
  });
  