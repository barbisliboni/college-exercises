alunos = []
alunos.append({'nome': 'Aluno 01', 'curso': 'Engenharia da Computação', 'AV1':7 })
alunos.append({'nome': 'Aluno 02', 'curso': 'Rede de Computadores', 'AV1':5 })
alunos.append({'nome': 'Aluno 03', 'curso': 'Rede de Computadores', 'AV1':5 })
alunos.append({'nome': 'Aluno 04', 'curso': 'Engenharia da Computação', 'AV1':8 })
alunos.append({'nome': 'Aluno 05', 'curso': 'Rede de Computadores', 'AV1':5 })
alunos.append({'nome': 'Aluno 06', 'curso': 'Gestão da Tecnologia da Informação', 'AV1':7 })
alunos.append({'nome': 'Aluno 07', 'curso': 'Gestão da Tecnologia da Informação', 'AV1':1 })
alunos.append({'nome': 'Aluno 08', 'curso': 'Engenharia da Computação', 'AV1':7 })
alunos.append({'nome': 'Aluno 09', 'curso': 'Engenharia da Computação', 'AV1':9 })
alunos.append({'nome': 'Aluno 10', 'curso': 'Engenharia da Computação', 'AV1':2 })
alunos.append({'nome': 'Aluno 11', 'curso': 'Engenharia da Computação', 'AV1':5 })
alunos.append({'nome': 'Aluno 12', 'curso': 'Gestão da Tecnologia da Informação', 'AV1':5 })
alunos.append({'nome': 'Aluno 13', 'curso': 'Engenharia da Computação', 'AV1':9 })
alunos.append({'nome': 'Aluno 14', 'curso': 'Gestão da Tecnologia da Informação', 'AV1':9 })
alunos.append({'nome': 'Aluno 15', 'curso': 'Engenharia da Computação', 'AV1': 8})
alunos.append({'nome': 'Aluno 16', 'curso': 'Gestão da Tecnologia da Informação', 'AV1':10})
alunos.append({'nome': 'Aluno 17', 'curso': 'Engenharia da Computação', 'AV1': 10})
alunos.append({'nome': 'Aluno 18', 'curso': 'Rede de Computadores', 'AV1':4 })
alunos.append({'nome': 'Aluno 19', 'curso': 'Rede de Computadores', 'AV1':8 })
alunos.append({'nome': 'Aluno 20', 'curso': 'Rede de Computadores', 'AV1':9 })

cursos = []
for aluno in alunos:
  if (aluno['curso'] not in cursos):
    cursos.append(aluno['curso'])

cursos.sort()

print('\n|  Dados  |')
for curso in cursos:
  notas = []
  for aluno in alunos:
    if (aluno['curso'] == curso):
      notas.append(aluno['AV1'])

  print('\nCurso: {} {}'.format(curso,notas))
  print('\nA maior nota foi ', max(notas))
  print('\nA menor nota foi ', min(notas))
  print('\nA média entre as notas foi de ', round(sum(notas)/len(notas),2 ) )

  # PANDA LIBRARY (CSV FILE)

  # ra,   name,    grande1,   grade2  - header
  # n456, Barbara, 9.5,       5.5     - first row
  # n789, Thiago,  10,        10      - second row
  # n101, Liboni,  8.8,       7.4     - third row
  # n101, Araujo,  9.5,       8.5     - forth row
  # how to save - file > save as... > select directory > csvFileName.csv > save

  #df_students = pd.read_csv('/content/csvFileName.csv', sep=',') - imports a csv file and specifying that what will separate the data is the comma
  #df_student.shape - shows the number os rows and columns 
  #df_students.info() - shows all data information 
  #df_students.head() - shows the first five items 
  #df_students.head(row_number) - shows the data according to the number os rows informed 
  #df_students.describe() - calculates some statistical data like percentile, mean and std of the numerical values of the Series or DataFrame
  #df_students.plot() - shows the variation from the variables having numeric values
  