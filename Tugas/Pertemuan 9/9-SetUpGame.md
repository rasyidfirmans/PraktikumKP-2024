# Ketentuan Tugas

1. Lakukan setup SFML dan Visual Studio untuk dapat membuat game seperti pada tutorial ini: [Setup SFML on Visual Studio](https://youtu.be/lFzpkvrscs4?si=Xk9G0sQVn-cMxPgl)
   
2. Setelah proses setup selesai, cobalah code berikut ini
   ```cpp
   #include <SFML/Graphics.hpp>

    int main()
    {
        sf::RenderWindow window(sf::VideoMode(1000, 1000), "PKP09_NIM_NamaLengkap");
        // Ubahlah sesuai dengan NIM dan nama kalian.

        sf::CircleShape shape(100.f);
        shape.setFillColor(sf::Color::Green);

        while (window.isOpen())
        {
            sf::Event event;
            while (window.pollEvent(event))
            {
                if (event.type == sf::Event::Closed)
                    window.close();
            }

            window.clear();
            window.draw(shape);
            window.display();
        }

        return 0;
    }
   ```
3. Contoh output program:
   ![Contoh Output](/Tugas/Pertemuan%209/assets/Screenshot%20From%202024-11-20%2019-10-31.png)

4. File pengumpulan berbentuk gambar (.jpg, .png, .jpeg) tidak boleh berbentuk .zip, .rar, atau file archiver lainnya
   
5. Format penamaan file `PKP09_NIM_NamaLengkap.[jpg, png, jpeg]`
   example:
   `PKP09_L0123117_RasyidNandiFirmansyah.jpg`