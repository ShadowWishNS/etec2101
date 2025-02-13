#pragma once

namespace ssuds
{
	template <class T>
	class ArrayList
	{
	private:
		T* my_array;
		unsigned int my_array_size;
		unsigned int my_array_capacity;

	public:
		ArrayList()
		{
			my_array_capacity = 0;
			my_array_size = 0;
			my_array = nullptr;
		}

		~ArrayList()
		{
			delete[] my_array;
		}

		T& at(unsigned int index)
		{
			if (index >= my_array_size)
			{
				throw std::out_of_range("Index out of range.");
			}
			return my_array[index];
		}

		unsigned int size() const
		{
			return my_array_size;
		}

		unsigned int capacity() const
		{
			return my_array_capacity;
		}

		void append(const T& new_value)
		{
			if (my_array_size == my_array_capacity)
			{
				unsigned int new_capacity;
				if (my_array_capacity == 0)
				{
					new_capacity = 5;
				}
				else
				{
					new_capacity = my_array_capacity * 2;
				}
				T* new_array = new T[new_capacity];

				for (unsigned int i = 0; i < my_array_size; i++)
				{
					new_array[i] = my_array[i];
				}

				delete[] my_array;
				my_array = new_array;
				my_array_capacity = new_capacity;
			}

			my_array[my_array_size] = new_value;
			my_array_size++;
		}

		void prepend(T new_value)
		{
			if (my_array_size == my_array_capacity)
			{
				unsigned int new_capacity;
				if (my_array_capacity == 0)
				{
					new_capacity = 5;
				}
				else
				{
					new_capacity = my_array_capacity * 2;
				}
				T* new_array = new T[new_capacity];

				for (unsigned int i = 0; i < my_array_size; i++)
				{
					new_array[i + 1] = my_array[i];
				}

				delete[] my_array;
				my_array = new_array;
				my_array_capacity = new_capacity;
			}
			else
			{
				for (unsigned int i = my_array_size; i > 0; i--)
				{
					my_array[i] = my_array[i - 1];
				}
			}

			my_array[0] = new_value;
			my_array_size++;
		}

		void insert(unsigned int index, T new_value)
		{
			if (index > my_array_size)
			{
				throw std::out_of_range("Index is out of range.");
			}

			if (my_array_size == my_array_capacity)
			{
				unsigned int new_capacity;
				if (my_array_capacity == 0)
				{
					new_capacity = 5;
				}
				else
				{
					new_capacity = my_array_capacity * 2;
				}
				T* new_array = new T[new_capacity];

				for (unsigned int i = 0; i < index; i++)
				{
					new_array[i] = my_array[i];
				}

				new_array[index] = new_value;

				for (unsigned int i = index; i < my_array_size; i++)
				{
					new_array[i + 1] = my_array[i];
				}

				delete[] my_array;
				my_array = new_array;
				my_array_capacity = new_capacity;
			}
			else
			{
				for (unsigned int i = my_array_size; i > index; i--)
				{
					my_array[i] = my_array[i - 1];
				}

				my_array[index] = new_value;
			}

			my_array_size++;
		}

		void remove(unsigned int id)
		{
			if (id >= my_array_size)
			{
				return; // out of array end
			}

			for (unsigned int i = id; i < my_array_size - 1; i++)
			{
				my_array[i] = my_array[i + 1];
			}

			my_array_size--;

		}

		int find(const T& value, unsigned int start_index = 0)
		{
			if (start_index >= my_array_size)
			{
				return -1;
			}

			for (unsigned int i = start_index; i < my_array_size; i++)
			{
				if (my_array[i] == value)
				{
					return i;
				}
			}

			return -1;
		}


		// ostream is the base class for all output-based streams (cout, ofstream)

		// **DANIEL NOTE** Honestly just didn't get to this.

		void output(std::ostream& os)
		{
			os << "[";
			// Some kind of loop
			os << "]";
		}

	};
}

// PS: Dumb thing to not realize but im not entirely sure how to
// "marked with the tag “v0.2”" for github, and didn't even notice until
// pushing stuff until now.