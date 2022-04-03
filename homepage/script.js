/* jshint esversion: 6 */

// Variable declaration
let body = document.querySelector("body");
let title = document.querySelector("#title");
let links = document.querySelector("#links");
let footer = document.querySelector("footer");

// What happens when clicking DEAD
document.querySelector("#dead").onclick = function () {
  body.style.backgroundColor = "#940d03";
  body.style.color = "#d1be9b";
  title.style.backgroundColor = "#5c1712";
  links.style.backgroundColor = "#5c1712";
  footer.style.backgroundColor = "#5c1712";

  if (window.location.pathname == "/index.html" || window.location.pathname == "/") {
    document.querySelector("#annehead").src = "img/annedecap.jpg";
    document.querySelector("#text").innerHTML = "He only went and cut my bloody head off didn't he. lolz.";
  } else if (window.location.pathname == "/bio.html") {
    let mark = document.querySelectorAll("mark");
    for (let i = 0; i < mark.length; i++) {
      mark[i].innerHTML = "DEAD";
      mark[i].style.backgroundColor = "red";
    }
  } else if (window.location.pathname == "/gallery.html") {
    document.querySelector("#text2").innerHTML = "What a COMPLETE TWAT.";
    document.querySelector("#text3").innerHTML  = "BASTARD BASTARD BASTARD BASTARD BASTARD BASTARD BASTARD BASTARD BASTARD BASTARD BASTARD BASTARD BASTARD BASTARD BASTARD BASTARD BASTARD BASTARD BASTARD BASTARD";
    document.querySelector("#henryone").src="img/henryone-alt.jpg";
    document.querySelector("#henrytwo").src="img/henrytwo-alt.jpg";
    document.querySelector("#henrythree").src="img/henrythree-alt.jpg";
  } else {
    document.querySelector("#search").value = "Death of Anne Boleyn";
  }
};

// Resetting when clicking ALIVE
document.querySelector("#alive").onclick = function() {
  body.style.backgroundColor = "#d1be9b";
  body.style.color = "white";
  title.style.backgroundColor = "#7d4215";
  links.style.backgroundColor = "#7d4215";
  footer.style.backgroundColor = "#7d4215";

  if (window.location.pathname == "/index.html" || window.location.pathname == "/") {
    document.querySelector("#annehead").src="img/anne.jpg";
    document.querySelector("#text").innerHTML = "Welcome to my page! My name is <mark>Anne Boleyn</mark> and I"m just starting out in my journey to learn how to <abbr>HTML</abbr>. I"ve always found the internet fascinating, and it"s really allowed me to explore my love of cats and witty banter. I"m a bit of a white witch on the side, (slide into my DMs and I"ll show you my extra pinky) but my true passion and goal in life was to be <mark>Queen</mark> of England. And I smashed it... for a bit. You"ll find more details in my bio page.";
  } else if (window.location.pathname == "/bio.html") {
    let mark = document.querySelectorAll("mark");
    for (let i = 0; i < mark.length; i++) {
      mark[i].innerHTML = "Queen";
      mark[i].style.backgroundColor = "#fff";
    }
  } else if (window.location.pathname == "/gallery.html") {
    document.querySelector("#text2").innerHTML = "What a hansome chap.";
    document.querySelector("#text3").innerHTML  = "Utterly splendid King, with the heart of a lion, the cunning of a fox and the grace of Robert Baratheon. I did for some time think that the King might be modelling some of his behaviour on the late fictional character.";
    document.querySelector("#henryone").src="img/henryone.jpg";
    document.querySelector("#henrytwo").src="img/henrytwo.jpg";
    document.querySelector("#henrythree").src="img/henrythree.jpg";
  } else {
    document.querySelector("#search").value = "Anne Boleyn";
  }
};
