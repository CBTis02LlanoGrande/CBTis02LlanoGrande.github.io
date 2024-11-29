   
        function doLogin() {
            document.sendin.username.value = document.login.username.value;
            document.sendin.password.value = hexMD5('$(chap-id)' + document.login.password.value + '$(chap-challenge)');
            document.sendin.submit();
            return false;
        }

        let currentIndex = 0;
        const slides = document.querySelectorAll('.carousel-image');
        let autoSlideInterval;

        function moveSlide(direction) {
            currentIndex += direction;

            if (currentIndex >= slides.length) {
                currentIndex = 0;
            }

            updateCarousel();
        }

        function updateCarousel() {
            const offset = -currentIndex * 100;
            document.querySelector('.carousel-images').style.transform = translateX(${offset}%);
        }

        function startAutoSlide() {
            autoSlideInterval = setInterval(() => {
                moveSlide(1);
            }, 6000); // Cambiar cada 6 segundos
        

        startAutoSlide();
    