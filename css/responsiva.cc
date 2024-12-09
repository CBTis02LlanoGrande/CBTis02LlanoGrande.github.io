/* Estilos generales */
body {
    margin: 0;
    padding: 0;
}

/* Estilos para el menú desplegable */
.dropdown {
    display: none;
    position: absolute;
    top: 100%;
    left: 0;
    background-color: gray;
    width: 135px;
    z-index: 10;
}

.dropdown li a {
    color: white;
    padding: 10px;
    display: block;
}

.dropdown li a:hover {
    background-color: darkgray;
}

nav ul li:hover .dropdown {
    display: block;
}

/* Estilos para el contenedor principal */
.cin {
    position: relative;
    display: flex;
    justify-content: center;
    align-items: center;
    height: 100vh;
}

.cinta {
    width: 100%;
    height: auto;
}

video {
    width: 100%;
    height: auto;
}

.video-container {
    width: 100px;
    height: 100px;
    border-radius: 50%;
    overflow: hidden;
    display: flex;
    align-items: center;
    justify-content: center;
    border: 1px solid #FFFFFF;
    margin-top: 5px;
    position: absolute;
}

/* Estilos para el contenedor del formulario de login */
.login-container {
    position: absolute;
    top: 80%;
    left: 5%;
    background-color: #BC955C;
    padding: 20px;
    border-radius: 8px;
    width: 300px;
    z-index: 1000;
    color: camel;
}

.login-form h2 {
    text-align: center;
    margin-bottom: 10px;
}

.login-form label {
    display: block;
    margin-bottom: 10px;
    font-weight: bold;
}

.login-form input,
.login-form select {
    width: 100%;
    padding: 10px;
    margin-bottom: 15px;
    border: 1px solid #ccc;
    border-radius: 4px;
}

.login-form button {
    width: 100%;
    padding: 8px;
    background-color: #9c9ba0;
    color: #7b7172;
    border: none;
    border-radius: 4px;
    cursor: pointer;
    margin-top: 20px;
}

.login-form button:hover {
    background-color: darkgray;
}

/* Media queries para hacer el diseño responsive */
@media only screen and (max-width: 768px) {
    .login-container {
        width: 90%;
        left: 5%;
    }
}

@media only screen and (max-width: 480px) {
    .login-container {
        width: 80%;
        left: 10%;
    }
}
