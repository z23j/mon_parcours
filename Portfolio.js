const projets = [
{
titre: "Programme Python",
image: "python.png",
description: "Programme permettant de résoudre des calculs scientifiques.",
lien: "JEUDY_Zoé.py"
},

{
titre: "Projet en C",
image: "C.png",
description: "Application développée en langage C pour manipuler des données.",
lien: "s4ex1.cpp"
},

{
titre: "Projet en SDI1201",
image: "Robot.png",
description: "Création d'un robot avec un programme pour une coupe robototique en petit groupe",
lien: "Lumiere.nxc"
},

{
titre:"Projet Cryptologie",
image:"cripto.png",
description:"Projet de cryptographie consistant à implémenter un algorithme de chiffrement permettant de sécuriser des messages. Le programme chiffre et déchiffre des données.",
lien:"cripto.ipynb"
},

{
titre:"Projet en SQL",
image:"SQL.png",
description:"Conception et gestion d’une base de données en SQL. Le projet consiste à modéliser des données, créer des tables et écrire des requêtes permettant de stocker, organiser et exploiter les informations.",
lien:"LINUS"
}

];

const container = document.getElementById("portfolio");

projets.forEach(projet => {

const card = document.createElement("div");
card.className = "card";

card.innerHTML = `
<img src="${projet.image}">
<h3>${projet.titre}</h3>
<p>${projet.description}</p>
<a href="${projet.lien}">Voir le projet</a>
`;

container.appendChild(card);

});