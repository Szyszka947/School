using System;

namespace R_INF
{
    internal class Program
    {
        static string Szyfruj(string tekst, int klucz)
        {
            char[,] plotek = new char[klucz, tekst.Length];

            bool zmniejszaj = false, zwiekszaj = true;

            for (int i = 0, w = 0; i < tekst.Length; i++)
            {
                if (w == klucz - 1)
                {
                    zmniejszaj = true;
                    zwiekszaj = false;
                }
                else if (w == 0 && i != 0)
                {
                    zmniejszaj = false;
                    zwiekszaj = true;
                }

                plotek[w, i] = tekst[i];

                if (zwiekszaj) w++;
                else if (zmniejszaj) w--;
            }

            string szyfrogram = string.Empty;

            foreach (var item in plotek)
            {
                szyfrogram += item;
            }

            return szyfrogram;
        }

        static void Main(string[] args)
        {
            var x = Szyfruj("KRYPTOGRAFIA", 4);
            Console.WriteLine(x);
        }
    }
}
