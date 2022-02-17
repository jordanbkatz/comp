// Trash Connor Code

let disappear = document.getElementById("gone");
disappear.addEventListener('click', toggle_visibility(gone));
function toggle_visibility(gone) {
    var e = document.getElementById(gone);
    if(e.style.display == 'block')
       e.style.display = 'none';
    else
       e.style.display = 'block';
 }

// Better Jordan Code

const fortnite = document.getElementById("fortnite");
document.getElementById("gone").addEventListener("click", function() {
    fortnite.style.display = (fortnite.style.display == 'block') ? 'none' : 'block';
});