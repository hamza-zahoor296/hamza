        // Navigation active link and smooth scroll
        document.querySelectorAll('.nav-links a').forEach(link => {
            link.addEventListener('click', function(e) {
                const href = this.getAttribute('href');
                if (href.startsWith('#')) {
                    e.preventDefault();
                    document.querySelectorAll('.nav-links a').forEach(l => l.classList.remove('active'));
                    this.classList.add('active');
                    document.querySelector(href).scrollIntoView({ behavior: 'smooth' });
                }
            });
        });

        // Hamburger menu toggle
        document.addEventListener('DOMContentLoaded', function() {
            const navLinks = document.querySelector('.nav-links');
            const header = document.querySelector('header');
            // Create hamburger button
            const hamburger = document.createElement('button');
            hamburger.className = 'hamburger';
            hamburger.setAttribute('aria-label', 'Open navigation menu');
            hamburger.innerHTML = '<span></span><span></span><span></span>';
            header.querySelector('.container nav').appendChild(hamburger);

            // Hamburger click event
            hamburger.addEventListener('click', function() {
                navLinks.classList.toggle('nav-open');
                hamburger.classList.toggle('is-active');
            });

            // Close nav on link click (mobile)
            navLinks.querySelectorAll('a').forEach(link => {
                link.addEventListener('click', () => {
                    navLinks.classList.remove('nav-open');
                    hamburger.classList.remove('is-active');
                });
            });
        });

        // Responsive time bar at top
        function updateTimeBar() {
            const now = new Date();
            const hours = now.getHours();
            const minutes = now.getMinutes();
            const seconds = now.getSeconds();
            const percent = ((hours * 3600 + minutes * 60 + seconds) / 86400) * 100;
            document.getElementById('time-bar-inner').style.width = percent + '%';
            document.getElementById('time-bar-label').textContent =
                now.toLocaleTimeString([], {hour: '2-digit', minute:'2-digit', second:'2-digit'});
        }
        setInterval(updateTimeBar, 1000);
        updateTimeBar();

        // Skill cards link to Alison courses
        const skillLinks = {
            "HTML": "https://alison.com/course/introduction-to-html",
            "CSS": "https://alison.com/course/introduction-to-css",
            "JavaScript": "https://alison.com/course/introduction-to-javascript",
            "C++": "https://alison.com/course/introduction-to-c-plus-plus"
        };
        document.addEventListener('DOMContentLoaded', function() {
            document.querySelectorAll('.skills-list .skill-card').forEach(card => {
                const skill = card.textContent.trim();
                if (skillLinks[skill]) {
                    card.style.cursor = 'pointer';
                    card.title = 'View Alison course for ' + skill;
                    card.addEventListener('click', function() {
                        window.open(skillLinks[skill], '_blank');
                    });
                }
            });
        });

        // Service cards link to resources
        const serviceLinks = {
            "Custom Web Design": "https://www.awwwards.com/websites/web-design/",
            "Website Development": "https://developer.mozilla.org/en-US/docs/Learn",
            "Responsive Redesigns": "https://web.dev/responsive-web-design-basics/"
        };
        document.addEventListener('DOMContentLoaded', function() {
            document.querySelectorAll('.services-list .service-card').forEach(card => {
                const titleElem = card.querySelector('h3');
                if (titleElem && serviceLinks[titleElem.textContent.trim()]) {
                    card.style.cursor = 'pointer';
                    card.title = 'Learn more about ' + titleElem.textContent.trim();
                    card.addEventListener('click', function() {
                        window.open(serviceLinks[titleElem.textContent.trim()], '_blank');
                    });
                }
            });
        });

        // Portfolio items link to resources
        const portfolioLinks = {
            "Landing Page for Startup": "https://www.awwwards.com/sites/startup-landing-page-examples",
            "Personal Blog Platform": "https://www.smashingmagazine.com/2020/01/designing-perfect-blog/",
            "Portfolio Website": "https://www.siteinspire.com/websites?categories=portfolio",
            "E-commerce Product Page": "https://www.shopify.com/blog/product-page-design"
        };
        document.addEventListener('DOMContentLoaded', function() {
            document.querySelectorAll('.portfolio-item').forEach(item => {
                const titleElem = item.querySelector('.portfolio-title');
                if (titleElem && portfolioLinks[titleElem.textContent.trim()]) {
                    item.style.cursor = 'pointer';
                    item.title = 'View example or resource for ' + titleElem.textContent.trim();
                    item.addEventListener('click', function() {
                        window.open(portfolioLinks[titleElem.textContent.trim()], '_blank');
                    });
                }
            });
        });

        // Hero section typing effect
        document.addEventListener('DOMContentLoaded', function() {
            const hero = document.querySelector('.hero-content h2');
            if (!hero) return;
            // Create the effect container
            const effectSpan = document.createElement('span');
            effectSpan.style.display = 'block';
            effectSpan.style.fontWeight = '700';
            effectSpan.style.fontSize = '1.3em';
            effectSpan.style.margin = '18px 0 0 0';
            effectSpan.style.letterSpacing = '1px';
            effectSpan.style.color = 'var(--accent2)';
            hero.parentNode.insertBefore(effectSpan, hero.nextSibling);

            // Words to cycle through
            const words = [
                "I am a Frontend Developer",
                " I am a Web Developer",
                " I am a Freelancer"
            ];
            let wordIndex = 0;
            let charIndex = 0;
            let erasing = false;

            function typeEffect() {
                const current = words[wordIndex];
                if (!erasing) {
                    effectSpan.textContent = current.substring(0, charIndex + 1);
                    charIndex++;
                    if (charIndex === current.length) {
                        erasing = true;
                        setTimeout(typeEffect, 1200);
                    } else {
                        setTimeout(typeEffect, 70);
                    }
                } else {
                    effectSpan.textContent = current.substring(0, charIndex - 1);
                    charIndex--;
                    if (charIndex === 0) {
                        erasing = false;
                        wordIndex = (wordIndex + 1) % words.length;
                        setTimeout(typeEffect, 400);
                    } else {
                        setTimeout(typeEffect, 40);
                    }
                }
            }
            typeEffect();
        });