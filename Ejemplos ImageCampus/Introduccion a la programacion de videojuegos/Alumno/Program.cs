using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ClaseAlumno
{
    class Alumno
    {
        // Propiedades
        private string Nombre;
        private float PriParcial;
        private float SegParcial;

        // Metodos
        public void MostrarPromedio()
        {
            System.Console.WriteLine("Las notas del alumno " + Nombre + " son: ");
            System.Console.WriteLine("Primer parcial: " + getPriParcial());
            System.Console.WriteLine("Primer parcial: " + getSegParcial());
            float Promedio = (getPriParcial() + getSegParcial()) / 2;
            System.Console.WriteLine("Promedio: " + Promedio);
        }

        private float getPriParcial()
        {
            return PriParcial;
        }

        private float getSegParcial()
        {
            return SegParcial;
        }

        public void setNombre(string _name)
        {
            Nombre = _name;
        }

        public void setPriParcial(float _priParcial)
        {
            PriParcial = _priParcial;
        }

        public void setSegParcial(float _segParcial)
        {
            SegParcial = _segParcial;
        }

    }
}

namespace Alumno
{
    class Program
    {
        static void Main(string[] args)
        {

            ClaseAlumno.Alumno Pepe = new ClaseAlumno.Alumno();
            ClaseAlumno.Alumno Popo = new ClaseAlumno.Alumno();

            Pepe.setNombre("Pepe");
            Popo.setNombre("Popo");

            Pepe.setPriParcial(10);
            Pepe.setSegParcial(4);

            Popo.setPriParcial(10);
            Popo.setSegParcial(10);

            Pepe.MostrarPromedio();
            Popo.MostrarPromedio();

        }
    }
}
