print('Василів Богдан ІС-01, завдання№6')
k=int(input('Введіть кількість секунд:'))#введення значення k
h=k//3600 # знаходимо кількість годин(1год=3600с), цілочисельне ділення
m=(k%3600)//60 # знаходимо кількість хвилин (1хв=60с), ділення з остачою, остачу ділимо на 60
print('%s годин %s хвилин'%(h,m))# виведення результату